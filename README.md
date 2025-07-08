- `ft_split`     : Stringi verilen ayırıcıya göre böler.
- `ft_itoa`      : Tam sayıyı stringe çevirir.
- `ft_strmapi`   : Her karaktere fonksiyon uygulayarak yeni string oluşturur.
- `ft_striteri`  : Her karakter üzerinde fonksiyon uygular (in-place).
- `ft_putchar_fd`: Karakteri belirtilen dosya tanımlayıcısına yazar.
- `ft_putstr_fd` : Stringi belirtilen dosya tanımlayıcısına yazar.
- `ft_putendl_fd`: Stringi yazıp sonuna yeni satır ekler.
- `ft_putnbr_fd` : Tam sayıyı belirtilen dosya tanımlayıcısına yazar.

## Proje Detayları

- **Kullanılan Dosyalar:** `Makefile`, `libft.h`, `ft_*.c`
- Tüm dosyalar proje ana klasöründe yer almalı.
- Kod, Norm kurallarına uygun olmalıdır. (Norm hatası = 0 puan)
- Global değişken kullanımı yasak. Yardımcı fonksiyonlar `static` olmalıdır.
- Derleme flag'leri: `-Wall -Wextra -Werror`
- Makefile hedefleri: `NAME`, `all`, `clean`, `fclean`, `re`
- Kütüphane, ar arşivi (`libft.a`) olarak oluşturulmalı.
- Libtool kullanımı yasak.
- `malloc` ile ayrılan bellek mutlaka `free` edilmelidir.
- Segfault, double free veya crash kabul edilmez.
- `libft.a` proje kökünde olmalıdır.
- Sadece git’e gönderilen dosyalar değerlendirilir.

### Sistem ve Test Notları

- Bazı fonksiyonlar (`strlcpy`, `strlcat`, `bzero`) GNU C Kütüphanesinde (glibc) standart değildir.
- Linux/glibc ortamında test için `<bsd/string.h>` dahil edilip, `-lbsd` ile derleme gerekebilir.

## Örnek Kullanım

```c
#include <fcntl.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    int fd = open("cikti", O_CREAT | O_RDWR | O_TRUNC, 0777);
    if (fd == -1)
    {
        perror("Hata Çıktısı");
        return (1);
    }
    ft_putstr_fd("selam", fd);
    close(fd);
    return (0);
}
```

## Derleme

Projeyi derlemek için:
```sh
make
```

## Temizlik Komutları

```sh
make clean    # Nesne dosyalarını siler
make fclean   # Nesne dosyalarını ve libft.a'yı siler
make re       # Yeniden derler
```

## Lisans

Bu proje 42 okulu eğitim amaçlıdır ve açık kaynak lisansı ile dağıtılabilir. Kendi geliştirmelerinizi yaparken kaynak göstermeniz önerilir.
