#include <genesis.h>
#include <serial.h>
#include <string.h>

#define SCREEN_WIDTH  320
#define SCREEN_HEIGHT 224

char buffer[256] = "";  // buffer para guardar as strings recebidas
int buffer_len = 0;     // tamanho atual da string no buffer

int main()
{
    u8 data;

    VDP_setScreenWidth320();
    VDP_setScreenHeight224();
     VDP_setTextPalette(0);

    VDP_drawTextBG(BG_B, "Content from web: ", 5, 5);
    serial_init(SCTRL_1200_BPS | SCTRL_SIN | SCTRL_SOUT);

    while (1) {
        if (serial_readyToReceive()) {
            data = serial_receive();
            if (data == '\n') {  // se receber caractere de fim de linha
                buffer[buffer_len] = '\0';  // adiciona o encerramento de string
                VDP_drawTextBG(BG_B, buffer, 5, 14);  // imprime a string na tela
                memset(buffer, 0, sizeof(buffer));  // esvazia  o buffer, zerando
                buffer_len = 0;
            } else {
                buffer[buffer_len] = data;  // adiciona o caractere ao buffer
                buffer_len++;
            }
        }
    }

    return 0;
}
