String readFromHeader(String header) {
  header.replace("GET /", "");
  header = header.substring(0, header.indexOf(" HTTP/1.1"));
  return header;
}


int getOutputType(String output) {
  if (output.indexOf("setText=") == 0) {

    return 0;
  } else if (output.indexOf("setLight=") == 0) {

    return 1;
  }

    return 41;
}
