# Mosquitto  for Unikraft 

This is the Unikraft library port for [Eclipse Mosquitto](https://mosquitto.org/) 2.1.2 MQTT broker.

## Dependencies

- `libmusl` — libc
- `libposix-socket` — POSIX socket API
- `libposix-event` — epoll/poll support
- `liblwip` — TCP/IP stack (with `LWIP_SOCKET`, `LWIP_TCP`, `LWIP_THREADS`, `LWIP_UKNETDEV`, `LWIP_AUTOIFACE`)

## Usage

Add this library to your application's `Makefile`:
```makefile
UK_LIBS += $(UK_WORKDIR)/libs/mosquitto
```

See `catalog-core/mosquitto/` for a complete application example.
