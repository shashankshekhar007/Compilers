package main

import "fmt"

func main() {

	// Logical Operators
	
	fmt.Println("true && false =", true && false);
	fmt.Println("true || false =", true || false);
	fmt.Println("!true =", !true);
	
	// For loops
	
	var i int = 1;
	
	for(i <= 10) {
		fmt.Println(i);
		
		// Shorthand for i = i + 1
		
		i++;
	}
	
	var yourAge int = 18;
	
	if yourAge >= 16 {
		fmt.Println("You Can Drive");
	} else {
		fmt.Println("You Can't Drive");
	}
	
	// You can use else if perform different actions, but once a match
	// is reached the rest of the conditions aren't checked
	
	if yourAge >= 16 {
		fmt.Println("You Can Drive");
	} else if yourAge >= 18 {
		fmt.Println("You Can Vote");
	} else {
		fmt.Println("You Can Have Fun");
	}
	
	// Switch statements are used when you have limited options
	
	switch yourAge {
		case 16: fmt.Println("Go Drive");
		case 18: fmt.Println("Go Vote");
		default: fmt.Println("Go Have Fun");
	}
}
