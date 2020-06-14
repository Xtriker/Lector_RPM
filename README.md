# Lector_RPM
Lector de RPM mediante STM32L412 y displays de 7 segmentos

Este proyecto es realizado mediante el software STM32CubeIDE y puede ser portadeado hacia cualquier tarjeta compatible con este software.
Este medidor puede desplegar valores desde 0 RPM y mayor de 9999.

El funcionamiento es el siguiente:

1. Mediante un transductor del tipo infrarrojo con su respectivo phototransistor, el LED infrarrojo tendrá una resistencia de 82 Ohms para evitar el daño del LED; el phototransistor esta en modo pull-up mediante una resistencia de 1kohm.

2. Este transductor se coloca en el PIN PC10 de la STM32L412, estas entradas pueden ser cambiadas a cualquier pin de la tarjeta, ya que se realizó macros con el nombre "Detener"; si se realiza cambio del pin, colocar el nombre como se encuentra la macro.
