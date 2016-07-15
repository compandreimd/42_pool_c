ldapsearch -Q "uid=*bon*" cn | grep cn: | cut -d " " -f 3 | grep BON | wc -l | tr ' ' 'y' | rev | cut -d y -f 1 | rev 
