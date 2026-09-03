#include <stdio.h>
#include "./vars.h"
#define VERSION "1.5"
#define REST "\033[0m"
#define GREEN "\x1b[32m"
#define SEFID "\x1b[37m"
#define RED "\x1b[31m"
//Backgrounds
#define GBC "\x1b[42m"
#define WBC "\x1b[47m"
#define RBC "\x1b[41m"
#define SEPARATOR "= "
const char osname[] = get_kernel;
void iran_linux(void) {
        printf(
                BGRD GREEN   "#######################" RESET GREEN " S" RESET SEFID "R" RESET RED "B" RESET "Fetch " VERSION "\n"
                BGRD GREEN   "#######################" RESET  " OS " SEPARATOR "iranOS\n"
                BGRD GREEN   "#######################" RESET  " Kernel " SEPARATOR get_kernel " " get_kernel_ver "\n"
                BGBL SEFID   "#######################" RESET  " Shell " SEPARATOR get_shell "\n"
                BGBL SEFID   "#######################" RESET  " Hostname " SEPARATOR get_hostname "\n"
                BGBL SEFID   "#######################" RESET "\n"
                BGWH RED     "#######################" RESET "\n"
                BGWH RED     "#######################" RESET "\n"
                BGWH RED     "#######################" RESET "\n"
        );
                 }
void iran_unknown() {
        printf(
                        GREEN " ## " RESET GREEN "S" RESET SEFID "R" RESET RED "B" RESET "Fetch" VERSION "\n"
                        GREEN "#  #" RESET "OS " SEPARATOR get_kernel "\n"
                        SEFID "  # " RESET "Kernel " SEPARATOR get_kernel " " get_kernel_ver "\n"
                        SEFID "  # " RESET "Shell " SEPARATOR get_shell "\n"
                        "    Hostname " SEPARATOR get_hostname "\n"
                        RED "  # " RESET "\n"
            );
}
void iran_openbsd() {
        printf(
                "       _____"  GREEN  "     D"  RESET  SEFID  "R"  RESET RED "B" RESET "Fetch " VERSION "\n"
                "     \\-     -/"  "   OS " SEPARATOR "iran_BSD" "\n"
                "  \\_/         \\" "  Kernel " SEPARATOR get_kernel " " get_kernel_ver "\n"
                " |         O O |" " Shell " SEPARATOR get_shell "\n"
                " |_  <   )  3 )" "  Hostname " SEPARATOR get_hostname "\n"
                " /  \\         /\n"
                "    /-_____-\\\n");
}
void iran_netbsd() {
      printf(
          "*" BGRD GREEN "###### " RESET GREEN " S" RESET SEFID "R" RESET RED "B" RESET "Fetch " VERSION "\n"
          "*" BGBL SEFID "###### " RESET " OS " SEPARATOR "iran_BSD\n"
          "*" BGWH RED "###### " RESET " Kernel " SEPARATOR get_kernel " " get_kernel_ver "\n"
          "*" "        Shell " SEPARATOR get_shell "\n"
          "*" "        Hostname " SEPARATOR get_hostname "\n" ); }
void iran_freebsd();
int main() {
	if(strcmp(osname, "Linux")   == 0)   { iran_linux();   }
  else if(strcmp(osname, "OpenBSD") == 0)   { iran_openbsd(); }
  else if(strcmp(osname, "NetBSD")  == 0)   { iran_netbsd();  }
  else if(strcmp(osname, "FreeBSD") == 0)   { iran_freebsd(); }
  else { iran_unknown(); }
}
