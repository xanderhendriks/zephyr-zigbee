#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(main);

int main(void) {
  LOG_INF("Firmware version: %s", GIT_VERSION);

  while (1) {
    k_sleep(K_MSEC(1000));
    LOG_INF("Yeah");
  }
}
