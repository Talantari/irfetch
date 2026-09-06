#include <stdio.h>
#include <string.h>
#include "./vars.h"

#define VERSION "1.5"
#define RESET   "\033[0m"
#define GREEN   "\x1b[32m"
#define SEFID   "\x1b[37m"
#define RED     "\x1b[31m"
//Backgrounds
#define IRG "\x1b[32;42m"
#define IRW "\x1b[37;47m"
#define IRR "\x1b[31;41m"
#define SEPARATOR "= "

const char osname[] = get_kernel;
void ir_linux(void) {
        printf(
                IRG "#######################" RESET GREEN " S" RESET SEFID "R" RESET RED "B" RESET "Fetch " VERSION "\n"
                IRG "#######################" RESET " OS " SEPARATOR "JabirOS\n"
                IRG "#######################" RESET " Kernel " SEPARATOR get_kernel " " get_kernel_ver "\n"
                IRW "#######################" RESET " Shell " SEPARATOR get_shell "\n"
                IRW "#######################" RESET " Hostname " SEPARATOR get_hostname "\n"
                IRW "#######################" RESET "\n"
                IRR "#######################" RESET "\n"
                IRR "#######################" RESET "\n"
                IRR "#######################" RESET "\n"
);
}
void ir_unknown(void) {
	printf(
                        IRG " ## " RESET GREEN "S" RESET SEFID "R" RESET RED "B" RESET "Fetch" VERSION "\n"
                        IRG "#  #" RESET "OS " SEPARATOR get_kernel "\n"
                        IRG "  # " RESET "Kernel " SEPARATOR get_kernel " " get_kernel_ver "\n"
                        IRW "  # " RESET "Shell " SEPARATOR get_shell "\n"
                        IRW "    Hostname " SEPARATOR get_hostname "\n"
                        IRR "  # " RESET "\n"
);
}
void ir_openbsd(void) {
        printf(
                "       _____"  GREEN  "     D"  RESET  SEFID  "R"  RESET RED "B" RESET "Fetch " VERSION "\n"
                "     \\-     -/"  "   OS " SEPARATOR "Jabir_BSD" "\n"
                "  \\_/         \\" "  Kernel " SEPARATOR get_kernel " " get_kernel_ver "\n"
                " |         O O |" " Shell " SEPARATOR get_shell "\n"
                " |_  <   )  3 )" "  Hostname " SEPARATOR get_hostname "\n"
                " /  \\         /\n"
                "    /-_____-\\\n");
}
void ir_netbsd(void) {
      printf(
          "*" IRG "###### " RESET GREEN " S" RESET SEFID "R" RESET RED "B" RESET "Fetch " VERSION "\n"
          "*" IRW "###### " RESET " OS " SEPARATOR "Jibbed\n"
          "*" IRR "###### " RESET " Kernel " SEPARATOR get_kernel " " get_kernel_ver "\n"
          "*" "        Shell " SEPARATOR get_shell "\n"
          "*" "        Hostname " SEPARATOR get_hostname "\n" );
}
void ir_freebsd(void) {
        printf(
                IRR "  ,######,  " RESET GREEN " S" RESET SEFID "R" RESET RED "B" RESET "Fetch " VERSION "\n"
                IRW "  |        |  " RESET " OS " SEPARATOR "FreeBSD\n"
                IRW "  |        |  " RESET " Kernel " SEPARATOR get_kernel " " get_kernel_ver "\n"
                IRR "  '--------'  " RESET " Shell " SEPARATOR get_shell "\n"
                IRR "                " RESET " Hostname " SEPARATOR get_hostname "\n" );
}

int main(void) {
        if(strcmp(osname, "Linux") == 0)        { ir_linux();   }
        else if(strcmp(osname, "OpenBSD") == 0) { ir_openbsd(); }
        else if(strcmp(osname, "NetBSD") == 0)  { ir_netbsd();  }
        else if(strcmp(osname, "FreeBSD") == 0) { ir_freebsd(); }
        else { ir_unknown(); }
        return 0;
}
