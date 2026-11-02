#include <iostream>
#include <sys/uio.h>

using namespace std;

int main()
{
	pid_t pid = 3340;

	void* adres = (void*)0x7fff8940fb14;

	int nowa_wartosc = 27;

	struct iovec local;
	local.iov_base = &nowa_wartosc;
	local.iov_len =  sizeof(nowa_wartosc);

	struct iovec remote ;
	remote.iov_base = adres;
	remote.iov_len = sizeof(nowa_wartosc);

	process_vm_writev(pid, &local, 1, &remote, 1, 0);

	return 0;
}
