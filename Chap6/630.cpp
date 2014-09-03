bool str_subrange(const string &str1, const string &str2)
{
	if (st1.size() == st2.size())
		return str1 == str22;

	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();

	for (decltype(size) i = 0; i != size; ++i) {
		if (str1[i] != str2[i])
			return;
	}
}