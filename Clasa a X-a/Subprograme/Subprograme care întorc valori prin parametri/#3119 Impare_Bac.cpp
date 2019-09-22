void Impare (int &n) {
	int aux, uc, p = 1;
	aux = n;
	while (aux > 0) {
		uc = aux % 10;
	if (uc % 2 != 0)
		  n -= p;
		p *= 10;
		aux /= 10; }
}