//para rodar digite(gcc ou g++): "g++ ./a.c -o ./a.exe -ltinfo && ./a.exe"

// colomatrix.c
#include <term.h>
#include <stdio.h>
#include <unistd.h>


const char msg_8_colors[]="Tabela com 8 cores dos terminais compativeis com ANSI X3.64";
const char msg_8b_colors[]="Tabela com 8 cores dos terminais compativeis com ANSI X3.64 + opcao de bold";
const char msg_16_colors[]="Tabela com 16 cores do PC e/ou Xterm";
const char msg_256_colors[]="Tabela com 256 cores do Xterm (16 basicas acima, 216 RGB, 24 tons de cinza)";


int main(void){
  int r, g, b, h;
  int fg_color, bg_color;

  setupterm(NULL, STDOUT_FILENO, NULL);

  putp(exit_attribute_mode);  /* limpa atributos de texto */
  putp(clear_screen);     /* limpa tela */
  putp(tparm(cursor_address, 0, 0));  /* vai para 1ª linha, 1ª coluna */

  printf("Número máximo de cores: %d\n\n", max_colors);

  /* ‘columns’ e ‘lines’ são variáveis globais definidas pela biblioteca */
  printf("%*s%s\n\n", (int)(columns+1-sizeof msg_8_colors)/2, "", msg_8_colors);
  printf("%*s", (int)(columns-24)/2, "");
  for(r=0; r<=1; r++){
    for(g=0; g<=1; g++){
      for(b=0; b<=1; b++){
        bg_color=b+2*g+4*r;
        fg_color=(r+b+g>=2? 0: 7);
        putp(tparm(set_a_background, bg_color));
        putp(tparm(set_a_foreground, fg_color));
        printf(" %1d ", bg_color);
        fflush(stdout);
      }
    }
  }
  putp(exit_attribute_mode);
  putchar('\n');

  printf("\n\n%*s%s\n\n", (int)(columns+1-sizeof msg_8b_colors)/2, "", msg_8b_colors);
  printf("%*s", (int)(columns-24)/2, "");
  for(r=0; r<=1; r++){
    for(g=0; g<=1; g++){
      for(b=0; b<=1; b++){
        bg_color=b+2*g+4*r;
        fg_color=(r+b+g>=2? 0: 7);
        putp(tparm(set_a_background, bg_color));
        putp(tparm(set_a_foreground, fg_color));
        printf(" %1d ", bg_color);
        fflush(stdout);
      }
    }
  }
  putp(exit_attribute_mode);
  printf("\n%*s", (int)(columns-32)/2, "");
  for(r=0; r<=1; r++){
    for(g=0; g<=1; g++){
      for(b=0; b<=1; b++){
        fg_color=b+2*g+4*r;
        bg_color=(r+b+g>=2? 0: 7);
        putp(tparm(set_a_background, bg_color));
        putp(tparm(set_a_foreground, fg_color));
        printf(" N%1d ", fg_color);
        fflush(stdout);
      }
    }
  }
  putp(exit_attribute_mode);
  printf("\n%*s", (int)(columns-32)/2, "");
  putp(enter_bold_mode);
  for(r=0; r<=1; r++){
    for(g=0; g<=1; g++){
      for(b=0; b<=1; b++){
        fg_color=b+2*g+4*r;
        bg_color=(r+b+g>=2? 0: 7);
        putp(tparm(set_a_background, bg_color));
        putp(tparm(set_a_foreground, fg_color));
        printf(" B%1d ", fg_color);
        fflush(stdout);
      }
    }
  }
  putp(exit_attribute_mode);
  putchar('\n');

  printf("\n\n%*s%s\n\n", (int)(columns+1-sizeof msg_16_colors)/2, "", msg_16_colors);
  for(h=0; h<=1; h++){
    printf("%*s", (int)(columns-32)/2, "");
    for(r=0; r<=1; r++){
      for(g=0; g<=1; g++){
        for(b=0; b<=1; b++){
          bg_color=b+2*g+4*r+8*h;
          fg_color=(h+r+b+g>=2? 0: 15);
          putp(tparm(set_a_background, bg_color));
          putp(tparm(set_a_foreground, fg_color));
          printf(" %2d ", bg_color);
          fflush(stdout);
        }
      }
    }
    putp(exit_attribute_mode);
    putchar('\n');
  }

  printf("\n\n%*s%s\n\n", (int)(columns+1-sizeof msg_256_colors)/2, "", msg_256_colors);
  for(h=0; h<=1; h++){
    printf("%*s", (int)(columns-40)/2, "");
    for(r=0; r<=1; r++){
      for(g=0; g<=1; g++){
        for(b=0; b<=1; b++){
          bg_color=b+2*g+4*r+8*h;
          fg_color=(h+r+b+g>2? 0: 15);
          putp(tparm(set_a_background, bg_color));
          putp(tparm(set_a_foreground, fg_color));
          printf(" %3d ", bg_color);
          fflush(stdout);
        }
      }
    }
    putp(exit_attribute_mode);
    putchar('\n');
  }
  for(r=0; r<6; r++){
    for(g=0; g<6; g++){
      if(!(g&1))
        printf("%*s", (int)(columns-60)/2, "");
      for(b=0; b<6; b++){
        bg_color=16+36*r+6*g+b;
        fg_color=(r+g+b>=6? 16: 231);
        putp(tparm(set_a_foreground, fg_color));
        putp(tparm(set_a_background, bg_color));
        printf(" %3d ", bg_color);
        fflush(stdout);
      }
      putp(exit_attribute_mode);
      if(g&1)
        putchar('\n');
    }
  }
  printf("%*s", (int)(columns-60)/2-8, "");
  bg_color=16;
  fg_color=231;
  putp(tparm(set_a_foreground, fg_color));
  putp(tparm(set_a_background, bg_color));
  printf(" (0/16) ");
  fflush(stdout);
  for(h=1; h<=12; h++){
    bg_color=231+h;
    putp(tparm(set_a_background, bg_color));
    printf(" %3d ", bg_color);
    fflush(stdout);
  }
  putp(exit_attribute_mode);
  putchar('\n');
  printf("%*s", (int)(columns-60)/2, "");
  putp(tparm(set_a_foreground, 16));
  for(h=13; h<=24; h++){
    bg_color=231+h;
    putp(tparm(set_a_background, bg_color));
    printf(" %3d ", bg_color);
    fflush(stdout);
  }
  bg_color=231;
  putp(tparm(set_a_background, bg_color));
  printf(" (15/231) ");
  fflush(stdout);
  putp(exit_attribute_mode);
  putchar('\n');

  return 0;
} 