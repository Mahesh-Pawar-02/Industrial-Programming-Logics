function DisplayTime(Division) {
    if (Division == "A") {
        console.log("Your exam is at 7 AM");
    }
    else if (Division == "B") {
        console.log("Your exam is at 8 AM");
    }
    else if (Division == "C") {
        console.log("Your exam is at 9 AM");
    }
    else if (Division == "D") {
        console.log("Your exam is at 10 AM");
    }
    else {
        console.log("Wrong Input, It should be either A,B,C,D");
    }
}
var Value = "C";
DisplayTime(Value);
