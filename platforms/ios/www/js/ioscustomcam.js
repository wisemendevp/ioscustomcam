var ioscustomcam = {
getPicture: function(success, failure){
    cordova.exec(success, failure, "ioscustomcam", "openCamera", []);
}
};