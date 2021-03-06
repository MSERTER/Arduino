#include "Monitor.h"

const char	uni_key[8]  = { 0x7F, 0x48, 0xE5, 0xEC, 0x12, 0x0F, 0xE1, 0x9E};	/* defoult net_key */
const char	sys_key[8]  = { 0x5C, 0x78, 0x51, 0xCB, 0x6A, 0xB5, 0x4E, 0x5E};
const char	crd_keya[6] = { 0x4B, 0x61, 0x5A, 0x75, 0x49, 0x69};
const char	crd_keyb[6] = {0x63, 0x45, 0x74, 0x55, 0x79, 0x4B};

Monitor mon(Serial);

void setup() {
  Serial.begin(9600);
  mon << "Hi. " << endl;
  
  mon << "def'o'ult net_key: ";
  mon.printBytes(uni_key, sizeof(uni_key), ' ');
  mon << endl;
  mon << "sys_key, for what? ";
  mon.printBytes(sys_key, sizeof(sys_key), ' ');
  mon << endl;
  mon << "card a: ";
  mon.printBytes(crd_keya, sizeof(crd_keya));
  mon << endl;
  mon << "card b: ";
  mon.printBytes(crd_keyb, sizeof(crd_keyb));
  mon << endl;
}

void loop() {}
