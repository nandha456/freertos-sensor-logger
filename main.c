
while (1)
{
    float temp = sensor_read_temperature();

    uart_print_float(temp);

    HAL_Delay(1000);
}
