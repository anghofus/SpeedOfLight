int outputType;
int linebreakPos;
String displayLineOne;
String displayLineTwo;

void executeCase(String output) {
  outputType = getOutputType(output);

  switch (outputType) {
    case 0:
    if (output.indexOf("+") > 0) {
      output.replace("setText=", "");
      linebreakPos = output.indexOf("+");
      displayLineOne = output.substring(0, linebreakPos);
      displayLineTwo = output.substring(linebreakPos + 1, output.length());
      
      updateText(displayLineOne, displayLineTwo);


    } else {
      output.replace("setText=", "");
      updateText(output, "");
    }
    break;

    case 1:
    output.replace("setLight=", "");
    if (output = "GREEN") {
      digitalWrite(D4, HIGH);
      delay(500);
      digitalWrite(D4, LOW);
    }
    break;

    default:
    updateText("ERROR", "");
    break;
  }
}
