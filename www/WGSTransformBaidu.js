var exec = require('cordova/exec');

module.exports = {

    wgsTransformBaidu: function (message, onSuccess, onError) {
        exec(onSuccess, onError, "WGSTransformBaidu", "WGSTransformBaidu", [message]);
    }
};
