#include <iostream>
#include <cstdio>
#include <string>

int main(int argc, char *argv[])
{
   std::string str{};

   // Uncomment the comment below  if you want a limiter
   /* Make sure correct command line arguments are passed
  if(argc > 12){
    puts("TOO MANY ARGUMENTS! MAKE SURE TO ONLY PASS 6 ARGUMENTS MAXIMUM!");
    return 1;
  }
  */


  for(int i = 1; i < argc; i++){
     str += argv[i];
     str += ' ';
  }

  // Gets length of str
  int length = str.length();

  // For loop to reverse str
  for(int i = 0; i < length / 2; i++){
    char temp = str[i];
    str[i] = str[length - 1 - i];
    str[length - 1 - i] = temp;
  }
 
  // Print reversed string 
  std::fputs(str.c_str(), stdout);
  std::putchar(' ');	// Places empty space afterwards
  std::putchar('\n');	// New line
  return 0;
}
    
