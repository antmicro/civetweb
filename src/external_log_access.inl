static void log_access(const struct mg_connection *conn)
{
	(void)conn;
	printf("[LOG_ACCESS] %s @ %d\n", __func__, __LINE__);
}
