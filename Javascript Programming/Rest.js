function Display() {
    var Data = [];
    for (var _i = 0; _i < arguments.length; _i++) {
        Data[_i] = arguments[_i];
    }
    console.log("Number of elemensts are : " + Data.length);
}
Display();
Display(11, 21, 51);
Display(11, 21, 51, 111);
Display(10, 20, 30, 40, 50);
