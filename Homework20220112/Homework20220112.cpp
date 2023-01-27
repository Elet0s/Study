int main() {
	int arr[10] = { 0 };
	int index = 0;
	int a = 0;
	while (a <= 20)//Â¦¼ö
	{
		while (a % 2 == 0 && a != 0)
		{
			arr[index] = a;
			index += 1;
			break;
		}
		a += 1;
	}
	index = 0;
	a = 0;
	while (a <= 19)//È¦¼ö
	{
		while (a % 2 == 1 && a != 0)
		{
			arr[index] = a;
			index += 1;
			break;
		}
		a += 1;
	}
}
