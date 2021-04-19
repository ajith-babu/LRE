Action()
{

	web_url("qcbin", 
		"URL=http://15.114.153.208:8080/qcbin/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=fonts/MetricWeb-Light.woff", ENDITEM, 
		"Url=fonts/MetricWeb-Regular.woff", ENDITEM, 
		"Url=fonts/MetricWeb-Bold.woff", ENDITEM, 
		LAST);

	lr_think_time(15);

	web_link("Tools", 
		"Text=Tools", 
		"Snapshot=t2.inf", 
		EXTRARES, 
		"Url=more/img/top_bg.png", ENDITEM, 
		LAST);

	web_link("ALM Client Registration", 
		"Text=ALM Client Registration", 
		"Snapshot=t3.inf", 
		LAST);

	return 0;
}