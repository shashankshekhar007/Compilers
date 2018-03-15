package main

import "os"

func main(){
	var na int = len(os.Args);
	var argv []string = os.Args;
	var wflg, tflg int = 0,0;
	var dflg int = 0;
	var c byte;
	switch (c){
		case 'w':
		case 'W':
			wflg = 1;
			break;
		case 't':
		case 'T':
			tflg = 1;
			break;
		case 'd':
			dflg=1;
			break;
	}
}
