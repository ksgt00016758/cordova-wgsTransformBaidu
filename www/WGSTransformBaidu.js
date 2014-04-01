var exec = require('cordova/exec');

module.exports = {

    wgsTransformBaidu: function (message, onSuccess, onError) {
        exec(onSuccess, onError, "wgsTransformBaidu", "wgsTransformBaidu", [message]);
    }
};
