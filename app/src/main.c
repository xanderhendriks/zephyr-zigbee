#include <zephyr/drivers/gpio.h>
#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(main);

static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(DT_ALIAS(led0), gpios);

int main(void) {
  LOG_INF("Firmware version: %s", GIT_VERSION);
  gpio_pin_configure_dt(&led, GPIO_OUTPUT_ACTIVE);

  while (1) {
    k_sleep(K_MSEC(1000));

    gpio_pin_toggle_dt(&led);
    LOG_INF("Yeah");
  }
}
