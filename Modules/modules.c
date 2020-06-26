#include "modules.h"

//#include "addrinfo.h"
//#include "cgensupport.h"  
//#include "md5.h"          
//#include "rotatingtree.h"  
//#include "sre_constants.h"  
//#include "_ssl_data.h"      
//#include "timing.h"   
//#include "unicodedata_db.h"  
//#include "yuv.h"
//#include "bsddb.h"       
//#include "posixmodule.h"  
//#include "socketmodule.h"  
//#include "sre.h"            
//#include "testcapi_long.h"  
//#include "tkinter.h"
//#include "unicodename_db.h"
           
//#include "almodule.c"       
//#include "clmodule.c"            
//#include "_curses_panel.c"   
//#include "fpetestmodule.c"     
//#include "grpmodule.c"        
//#include "_lsprof.c"     
//#include "ossaudiodev.c"    
//#include "rotatingtree.c"  
//#include "_ssl.c"             
//#include "timemodule.c"    
//#include "zlibmodule.c"
//#include "arraymodule.c"
//#include "cmathmodule.c"         
//#include "datetimemodule.c"  
//#include "_functoolsmodule.c"  
//#include "_hashopenssl.c"
//#include "parsermodule.c"   
//#include "selectmodule.c"  
//#include "stropmodule.c"      
//#include "timingmodule.c"
//#include "audioop.c"        
//#include "_codecsmodule.c"       
//#include "dbmmodule.c"       
//#include "future_builtins.c"   
//#include "_heapqmodule.c"  
//#include "posixmodule.c"    
//#include "sgimodule.c"     
//#include "_struct.c"          
//#include "tkappinit.c"   
//#include "_collectionsmodule.c"  
//#include "dlmodule.c"        
//#include "gcmodule.c"          
//#include "_hotshot.c"  
//#include "puremodule.c"     
//#include "sha256module.c"  
//#include "sunaudiodev.c"      
//#include "_tkinter.c"
//#include "_bisectmodule.c"  
//#include "config.c"              
//#include "_elementtree.c"    
//#include "gdbmmodule.c"        
//#include "imageop.c"          
//#include "md5.c"         
//#include "pwdmodule.c"      
//#include "sha512module.c"  
//#include "svmodule.c"         
//#include "unicodedata.c"
//#include "_bsddb.c"         
//#include "cPickle.c"             
//#include "errnomodule.c"     
//#include "getaddrinfo.c"       
//#include "imgfile.c"          
//#include "md5module.c"   
//#include "pyexpat.c"        
//#include "shamodule.c"     
//#include "symtablemodule.c"   
//#include "_weakref.c"
//#include "bsddbmodule.c"    
//#include "cryptmodule.c"         
//#include "fcntlmodule.c"     
//#include "getbuildinfo.c"      
//#include "itertoolsmodule.c" 
//#include "mmapmodule.c"  
//#include "python.c"         
//#include "signalmodule.c"  
//#include "syslogmodule.c"     
//#include "xxmodule.c"
//#include "bz2module.c"      
//#include "cStringIO.c"           
//#include "flmodule.c"        
//#include "getnameinfo.c"       
//#include "_json.c"   
//#include "_randommodule.c"  
//#include "socketmodule.c"  
//#include "termios.c"          
//#include "xxsubtype.c"
//#include "cdmodule.c"       
//#include "_csv.c"                
//#include "fmmodule.c"        
//#include "getpath.c"           
//#include "linuxaudiodev.c"    
//#include "nismodule.c"   
//#include "readline.c"       
//#include "spwdmodule.c"    
//#include "_testcapimodule.c"  
//#include "yuvconvert.c"
//#include "cgensupport.c"    
//#include "_cursesmodule.c"       
//#include "fpectlmodule.c"    
//#include "glmodule.c"          
//#include "_localemodule.c"    
//#include "operator.c"    
//#include "resource.c"       
//#include "_sre.c"          
//#include "threadmodule.c"     
//#include "zipimport.c"

#include "mathmodule.c"     
#include "_math.h"     
#include "_math.c"       
#include "binascii.c" 

void import_modules() {
    initmath();
    initbinascii();

	/*initarray();
	init_bisect();
	initbz2();
	initcmath();
	init_collections();
	init_csv();
	initdatetime();
	initerrno();
	initfcntl();
	init_functools();
	initfuture_builtins();
	initgrp();
	init_heapq();
	inititertools();
	init_json();
	init_lsprof();
	initmath();
	init_md5();
	init_random();
	initselect();
	initsignal();
	initspwd();
	init_socket();
	init_ssl();
	init_struct();
	initthread();
	inittime();
	init_weakref();
	initxx();
	initxxsubtype();
	initunicodedata();*/
}





