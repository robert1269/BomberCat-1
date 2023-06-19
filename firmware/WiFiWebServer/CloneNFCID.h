#define KEY_MFC      0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF        // Default Mifare Classic key

unsigned char STATUSOK[] = {0x90, 0x00}, Cmd[256], CmdSize;

uint8_t uidcf[20] = {
    0x20, 0x02, 0x05, 0x01, /* CORE_SET_CONFIG_CMD */
    0x00, 0x02, 0x00, 0x01  /* TOTAL_DURATION */
};

uint8_t uidlen = 0;

// Token = data to be use it as track 2
// 4412345605781234 = card number in this case
uint8_t token[19] = {0x44, 0x12, 0x34, 0x56, 0x05, 0x78, 0x12, 0x34, 0xd1, 0x71, 0x12, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x99, 0x1f};

// Visa MSD emulation variables
uint8_t apdubuffer[255] = {}, apdulen;
uint8_t ppsea[] = {0x6F, 0x23, 0x84, 0x0E, 0x32, 0x50, 0x41, 0x59, 0x2E, 0x53, 0x59, 0x53, 0x2E, 0x44, 0x44, 0x46, 0x30, 0x31, 0xA5, 0x11, 0xBF, 0x0C, 0x0E, 0x61, 0x0C, 0x4F, 0x07, 0xA0, 0x00, 0x00, 0x00, 0x03, 0x10, 0x10, 0x87, 0x01, 0x01, 0x90, 0x00};
uint8_t visaa[] = {0x6F, 0x1E, 0x84, 0x07, 0xA0, 0x00, 0x00, 0x00, 0x03, 0x10, 0x10, 0xA5, 0x13, 0x50, 0x0B, 0x56, 0x49, 0x53, 0x41, 0x20, 0x43, 0x52, 0x45, 0x44, 0x49, 0x54, 0x9F, 0x38, 0x03, 0x9F, 0x66, 0x02, 0x90, 0x00};
uint8_t processinga[] = {0x80, 0x06, 0x00, 0x80, 0x08, 0x01, 0x01, 0x00, 0x90, 0x00};
uint8_t last[4] = {0x70, 0x15, 0x57, 0x13};
uint8_t card[25] = {};
uint8_t statusapdu[2] = {0x90, 0x00};
uint8_t finished[] = {0x6f, 0x00};

uint8_t data[]= {0x90, 0x00};

boolean detectCardFlag = false;

uint8_t ppdol[255] = {0x80, 0xA8, 0x00, 0x00, 0x02, 0x83, 0x00};
