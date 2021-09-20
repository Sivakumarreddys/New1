
#include "lrs.h"
#include "as_web.h"
#include "lrw_custom_body.h"

/***********************************************************
*	Sessionless AirAvailabilityByTariff request will be sent to    		
*	Copy Galileo host system
************************************************************/

Action1()
{
	
	web_global_verification("Text/IC=200 OK", "Search=headers", "fail=notfound", LAST);
	web_global_verification("Text/IC=Response>", "Search=body", "fail=notfound", LAST);

    web_set_sockets_option("SSL_VERSION","TLS1.2");


    web_add_header("Authorization", "Basic VERTV1MvTE9BRFJVTk5FUjA0OmNveW90RTAz");

	web_add_header("SOAPAction", "\"http://webservices.galileo.com/SubmitXml\"");

	web_reg_find("text/IC=<Erro", "fail=found", LAST);

	web_reg_find("text/IC=TRANSACTIONERRO", "fail=found", LAST);

	lr_start_transaction("XWS_sessionless_5192_AirAvailabilityByTariff_13_1V_CGR");

    web_custom_request("XMLSelect_Sessionless_5192_AirAvailabilityByTariff_13_1V",
		"URL={URL}/XMLSelect",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=",
		"Mode=HTTP",
		"Binary=1",
		"EncType=text/xml; charset=utf-8",
		"Body="
			"<?xml version=\"1.0\" encoding=\"utf-8\"?>"
			"<soap:Envelope xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\">"
  				"<soap:Body>"
    				"<SubmitXml xmlns=\"http://webservices.galileo.com\">"
      					"<Profile>{access_profile}</Profile>"
      					"<Request>"
                        "<AirAvailabilityByTariff_13>"
                        "<FareDisplayMods>"
                        "<QueryHeader>"
                        "<UniqueKey>0000</UniqueKey>"
                        "<LangNum>0</LangNum>"
                        "<Action>2</Action>"
                        "<RetCRTOutput />"
                        "<NoMsg />"
                        "<NoTrunc>Y</NoTrunc>"
                        "<IMInd />"
                        "<FIPlus />"
                        "<PEInd />"
                        "<PVInd />"
                        "<NBInd />"
                        "<ActionOnlyInd />"
                        "<TranslatePeriod />"
                        "<PIInd />"
                        "<IntFrame1>Y</IntFrame1>"
                        "<SmartParsed>Y</SmartParsed>"
                        "<PDCodes />"
                        "<BkDtOverride />"
                        "<HostUse25 />"
                        "<DefCurrency />"
                        "<PFPWInd>Y</PFPWInd>"
                        "<PFPQInd />"
                        "<HostUse29 />"
                        "<HostUse30 />"
                        "<HostUse31 />"
                        "<HostUse32 />"
                        "<HostUse33 />"
                        "<TariffQual>"
                        "<DispYYasBlanks />"
                        "<NoAirpSort>Y</NoAirpSort>"
                        "<HiLo>N</HiLo>"
                        "<PRIInd>Y</PRIInd>"
                        "<FormulaDisp />"
                        "<NonIntegratedDisp>N</NonIntegratedDisp>"
                        "<PrivDisp />"
                        "<HMCTInd />"
                        "<RemvInfants />"
                        "<HistFaresInd />"
                        "<NoCompFares>Y</NoCompFares>"
                        "<ExcTaxes />"
                        "<HostUseOnly />"
                        "<StructTariffDispResp />"
                        "<PrefDataRequired />"
                        "<NetFaresOnly>N</NetFaresOnly>"
                        "</TariffQual>"
                        "</QueryHeader>"
                        "<TravConstraints>"
                        "<UniqueKey>0000</UniqueKey>"
                        "<StartPt>NYC</StartPt>"
                        "<EndPt>LHR</EndPt>"
                        "<OW>N</OW>"
                        "<RT>Y</RT>"
                        "<LongDispInd>N</LongDispInd>"
                        "<ValidatingDispInd>N</ValidatingDispInd>"
                        "<NUCInd>N</NUCInd>"
                        "<RetDataInd />"
                        "<HostUse21>Y</HostUse21>"
                        "<BaseFares>N</BaseFares>"
                        "<ConxPts />"
                        "<IncDomTax>Y</IncDomTax>"
                        "<ConvAP />"
                        "<FQSFareType>N</FQSFareType>"
                        "<HalfRT>N</HalfRT>"
                        "<CalShopReq />"
                        "<CheckAltCitiesExist />"
                        "<RetAltCityQuote />"
                        "<StartDt>20201119</StartDt>"
                        "<AirV1>BA</AirV1>"
                        "<AirV2 />"
                        "<AirV3 />"
                        "<GlobDir />"
                        "<ConxPt1 />"
                        "<ConxPt2 />"
                        "<EndDt />"
                        "<TkDt />"
                        "<FareType />"
                        "<Currency />"
                        "<Pt />"
                        "<SellCurrency />"
                        "<JointFares>N</JointFares>"
                        "<RndWorld>N</RndWorld>"
                        "<CircTrip>N</CircTrip>"
                        "<DoubleOneWay />"
                        "<AltDatesReq />"
                        "<Surcharges />"
                        "<Spare1 />"
                        "<SkipEffDtProcess>N</SkipEffDtProcess>"
                        "<CabinNum>0</CabinNum>"
                        "<EffStartDtFilter />"
                        "<EffEndDtFilter />"
                        "<AgencyPvtFare>N</AgencyPvtFare>"
                        "<AirlinePvtFare>N</AirlinePvtFare>"
                        "<Spare2>NNNNNN</Spare2>"
                        "</TravConstraints>"
                        "<PFMods>"
                        "<UniqueKey>0</UniqueKey>"
                        "<PCC>J0B</PCC>"
                        "<Acct>VLTEST</Acct>"
                        "<Contract />"
                        "<RedistApplies>N</RedistApplies>"
                        "<ApplyAgencyPvtFare>N</ApplyAgencyPvtFare>"
                        "<ApplyAirlinePvtFare>N</ApplyAirlinePvtFare>"
                        "<AgencyPvtFareInd>Y</AgencyPvtFareInd>"
                        "<AirlinePvtFareInd>N</AirlinePvtFareInd>"
                        "<LLPFApplies>N</LLPFApplies>"
                        "<AcctCodeInd>Y</AcctCodeInd>"
                        "<Spare>N</Spare>"
                        "</PFMods>"
                        "</FareDisplayMods>"
                        "<AirAvailMods>"
                        "<GenAvail>"
                        "<NumSeats>1</NumSeats>"
                        "<Class></Class>"
                        "<StartDt>20201119</StartDt>"
                        "<StartPt>JFK</StartPt>"
                        "<EndPt>LHR</EndPt>"
                        "<StartTm>0001</StartTm>"
                        "<TmWndInd>D</TmWndInd>"
                        "<StartTmWnd>000</StartTmWnd>"
                        "<EndTmWnd>2359</EndTmWnd>"
                        "<JrnyTm><![CDATA[ ]]></JrnyTm>"
                        "<IgnoreTSPref>Y</IgnoreTSPref>"
                        "<MaxNumFlts></MaxNumFlts>"
                        "</GenAvail>"
                        "<GenAvail>"
                        "<NumSeats>1</NumSeats>"
                        "<Class></Class>"
                        "<StartDt>20201130</StartDt>"
                        "<StartPt>LHR</StartPt>"
                        "<EndPt>JFK</EndPt>"
                        "<StartTm>0001</StartTm>"
                        "<TmWndInd>D</TmWndInd>"
                        "<StartTmWnd>000</StartTmWnd>"
                        "<EndTmWnd>2359</EndTmWnd>"
                        "<JrnyTm><![CDATA[ ]]></JrnyTm>"
                        "<IgnoreTSPref>Y</IgnoreTSPref>"
                        "<MaxNumFlts></MaxNumFlts>"
                        "</GenAvail>"
                        "</AirAvailMods>"
                        "</AirAvailabilityByTariff_13>"
					   "</Request>"
					   "<Filter><_/></Filter>"
    				"</SubmitXml>"
  				"</soap:Body>"
			"</soap:Envelope>",
		LAST);

	lr_end_transaction("XWS_sessionless_5192_AirAvailabilityByTariff_13_1V_CGR", LR_AUTO);

	lr_continue_on_error(0);

    lr_think_time(4);

    return 0;
}
