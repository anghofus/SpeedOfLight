#include <TextFinder.h>

String readFromHeader(String header) {
  TextFinder finder(header);
  if (finder.find("GET")){
  String output = "true";  
  }
  String output = "WRONG"; 
  return output;
}

