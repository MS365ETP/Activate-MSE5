function concentrationClock(minutes) {
  // 将分钟转换为毫秒
  var milliseconds = minutes * 60 * 1000;

  // 倒计时开始
  var timer = setInterval(function() {
    // 计算分钟和秒数
    var displayMinutes = Math.floor(milliseconds / 60000);
    var displaySeconds = Math.floor((milliseconds % 60000) / 1000);

    // 输出当前时间
    console.log("Remaining Time: " + displayMinutes + " minutes, " + displaySeconds + " seconds");

    // 减少一秒
    milliseconds -= 1000;

    // 判断倒计时是否结束
    if (milliseconds < 0) {
      clearInterval(timer);
      console.log("Time's up! Stay focused!");
    }
  }, 1000);
}

var minutes = prompt("Enter the number of minutes for concentration:");
concentrationClock(minutes);
