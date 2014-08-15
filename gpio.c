
#include "gpio.h"


int rasp_gpio_pud(int gpio, int pull)
{
  int status = 0;
  /* write to RASP_GPIO_PULL_PUD_EN_REG to set control signal */
  status = write(RASP_GPIO_PULL_PUD_EN_REG, pull);
  if(!status)
  {
    RASP_ERR("[%]  write to RASP_GPIO_PULL_PUD_EN_REG failed!!!",__func__);
    return status;
  }
  /* wait for 150 cycles */

  /* write to RASP_GPIO_PUD_CLK_EN_REG0/1 to clock the control signal */
  if(gpio<32)
    status = write(RASP_GPIO_PUD_CLK_EN_REG0,);
  else
    status = write(RASP_GPIO_PUD_CLK_EN_REG1,);
  if(!status)
  {
    RASP_ERR("[%]  write to RASP_GPIO_PUD_CLK_EN_REG failed!!!",__func__);
    return status;
  }

  /* wait for 150 cycles */


  /* write to RASP_GPIO_PULL_PUD_EN_REG to clear control signal */
  status = write(RASP_GPIO_PULL_PUD_EN_REG, GPIO_PULL_NONE);
  if(!status)
  {
    RASP_ERR("[%]  write to RASP_GPIO_PULL_PUD_EN_REG failed!!!",__func__);
    return status;
  }

  /* write to RASP_GPIO_PUD_CLK_EN_REG0/1 to remove clock */
}