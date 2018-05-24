#include "marketbrowser.h"
#include "ui_marketbrowser.h"
#include "main.h"
#include "wallet.h"
#include "base58.h"
#include "clientmodel.h"
#include "bitcoinrpc.h"
#include <QDesktopServices>

#include <sstream>
#include <string>

using namespace json_spirit;

const QString kBaseUrl = "http://sono.io/SONOusd.php";
const QString kBaseUrl1 = "http://blockchain.info/tobtc?currency=USD&value=1";
const QString kBaseUrl2 = "http://sono.io/SONOmc.php";
const QString kBaseUrl3 = "http://sono.io/SONObtc.php";

QString bitcoinp = "";
QString sonop = "";
QString SONOmcp = "";
QString SONObtcp = "";
double bitcoin2;
double sono2;
double SONOmc2;
double SONObtc2;
QString bitcoing;
QString SONOmarket;
QString dollarg;
int mode=1;
int o = 0;


MarketBrowser::MarketBrowser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MarketBrowser)
{
    ui->setupUi(this);
    setFixedSize(400, 420);


requests();
QObject::connect(&m_nam, SIGNAL(finished(QNetworkReply*)), this, SLOT(parseNetworkResponse(QNetworkReply*)));
connect(ui->startButton, SIGNAL(pressed()), this, SLOT( requests()));
connect(ui->egal, SIGNAL(pressed()), this, SLOT( update()));

}

void MarketBrowser::update()
{
    QString temps = ui->egals->text();
    double totald = dollarg.toDouble() * temps.toDouble();
    double totaldq = bitcoing.toDouble() * temps.toDouble();
    ui->egald->setText("$ "+QString::number(totald)+" USD or "+QString::number(totaldq)+" BTC");

}

void MarketBrowser::requests()
{
	getRequest(kBaseUrl);
    getRequest(kBaseUrl1);
	getRequest(kBaseUrl2);
	getRequest(kBaseUrl3);
}

void MarketBrowser::getRequest( const QString &urlString )
{
    QUrl url ( urlString );
    QNetworkRequest req ( url );
    req.setHeader(QNetworkRequest::ContentTypeHeader, "application/json; charset=utf-8");
    m_nam.get(req);
}

void MarketBrowser::parseNetworkResponse(QNetworkReply *finished )
{

    QUrl what = finished->url();

    if ( finished->error() != QNetworkReply::NoError )
    {
        // A communication error has occurred
        emit networkError( finished->error() );
        return;
    }
	
if (what == kBaseUrl) // SONO Price
{

    // QNetworkReply is a QIODevice. So we read from it just like it was a file
    QString sono = finished->readAll();
    sono2 = (sono.toDouble());
    sono = QString::number(sono2, 'f', 2);
	
    if(sono > sonop)
    {
        ui->sono->setText("<font color=\"yellow\">$" + sono + "</font>");
    } else if (sono < sonop) {
        ui->sono->setText("<font color=\"red\">$" + sono + "</font>");
        } else {
    ui->sono->setText("$"+sono+" USD");
    }

    sonop = sono;
	dollarg = sono;
}

if (what == kBaseUrl1) // Bitcoin Price
{

    // QNetworkReply is a QIODevice. So we read from it just like it was a file
    QString bitcoin = finished->readAll();
    bitcoin2 = (1 / bitcoin.toDouble());
    bitcoin = QString::number(bitcoin2, 'f', 2);
    if(bitcoin > bitcoinp)
    {
        ui->bitcoin->setText("<font color=\"yellow\">$" + bitcoin + " USD</font>");
    } else if (bitcoin < bitcoinp) {
        ui->bitcoin->setText("<font color=\"red\">$" + bitcoin + " USD</font>");
        } else {
    ui->bitcoin->setText("$"+bitcoin+" USD");
    }

    bitcoinp = bitcoin;
}

if (what == kBaseUrl2) // SONO Market Cap
{

    // QNetworkReply is a QIODevice. So we read from it just like it was a file
    QString SONOmc = finished->readAll();
    SONOmc2 = (SONOmc.toDouble());
    SONOmc = QString::number(SONOmc2, 'f', 2);
	
    if(SONOmc > SONOmcp)
    {
        ui->SONOmc->setText("<font color=\"yellow\">$" + SONOmc + "</font>");
    } else if (SONOmc < SONOmcp) {
        ui->SONOmc->setText("<font color=\"red\">$" + SONOmc + "</font>");
        } else {
    ui->SONOmc->setText("$"+SONOmc+" USD");
    }

    SONOmcp = SONOmc;
	SONOmarket = SONOmc;
}

if (what == kBaseUrl3) // SONO BTC Price
{

    // QNetworkReply is a QIODevice. So we read from it just like it was a file
    QString SONObtc = finished->readAll();
    SONObtc2 = (SONObtc.toDouble());
    SONObtc = QString::number(SONObtc2, 'f', 8);
	
    if(SONObtc > SONObtcp)
    {
        ui->SONObtc->setText("<font color=\"yellow\">" + SONObtc + " BTC</font>");
    } else if (SONObtc < SONObtcp) {
        ui->SONObtc->setText("<font color=\"red\">" + SONObtc + " BTC</font>");
        } else {
    ui->SONObtc->setText(SONObtc+" BTC");
    }

    SONObtcp = SONObtc;
	bitcoing = SONObtc;
}

finished->deleteLater();
}


void MarketBrowser::setModel(ClientModel *model)
{
    this->model = model;
}

MarketBrowser::~MarketBrowser()
{
    delete ui;
}
