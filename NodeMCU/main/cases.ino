int outputType;

void executeCase(String output) {
  outputType = getOutputType(output);

  switch (outputType) {
    case 0:
    output.replace("setText=", "");
    updateText(output, "");
    break;
    case 1:
    output.replace("setLight=", "");
    updateText(output, "");
    break;
    default:
    updateText("ERROR", "");
    break;
  }
}
