/*
 * wrapper to call mosquitto_main from unikraft.
 * mosquitto.c's main() is renamed to mosquitto_main via -Dmain=mosquitto_main
 */

extern int mosquitto_main(int argc, char *argv[]);

int main(int argc, char *argv[]) { return mosquitto_main(argc, argv); }
