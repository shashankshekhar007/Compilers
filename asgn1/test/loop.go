package main

import "fmt"

func main(){
	var i,j,k,res int;
	for (res,i = 0,1; i < 10; i++) {
		for(j = 0; j < 10; j++){
			for(k = 0; k < 10; k++){
				res += 1;
			}
		}
	}
	fmt.Println(i);
}
