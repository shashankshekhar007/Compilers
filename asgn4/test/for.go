package main

import "fmt"

func main(){
	var i int = 6;
	for (;i<= 8 && i>= 6 && i!=7; i++){
		if(i>=0){
			fmt.Println("yes\n");
		} else {
			fmt.Println("no\n");
		}
	}
}
