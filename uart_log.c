void uart_print(const char *msg)
{
    HAL_UART_Transmit(...);
}

void uart_print_float(float value)
{
    char buffer[32];

    sprintf(buffer,"Temperature: %.2f\r\n",value);

    uart_print(buffer);
}
