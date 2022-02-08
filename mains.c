/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mains.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:35:55 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/08 15:39:33 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libs.h"

int main()
{	
	int	numero = '5';
	int letra = 'a';

	printf("isprint numero = 5:  %d\n", s_isprint(numero));
	printf("isprint letra = a:  %d\n\n", s_isprint(letra));
	printf("isalpha numero = 5:  %d\n", s_isalpha(numero));
	printf("isalpha letra = a:  %d\n\n", s_isalpha(letra));
	printf("isdigit numero = 5:  %d\n", s_isdigit(numero));
	printf("isdigit letra = a:  %d\n\n", s_isdigit(letra));
	printf("isascii numero = 5:  %d\n", s_isascii(numero));
	printf("isascii letra = a:  %d\n\n", s_isascii(letra));
	printf("isalnum numero = 5:  %d\n", s_isalnum(numero));
	printf("isalnum letra = a:  %d\n\n", s_isalnum(letra));




	char str[] = "casa";
	int result;
	result = s_strlen(str);
	printf("s_strlen cuenta el largo de casa: %d\n\n", result);

	char *src1 = "grandiosa";
	char dst[5];
	int result1;
	result1 = s_strlcpy(dst, src1, 5);
	printf("s_strlcpy src=grandiosa dst=casa dstsize=5: %d\n", result1);
	printf("s_strlcpy src=grandiosa dst=casa dstsize=5 devuelve src: %s\n", src1);
	printf("s_strlcpy src=grandiosa dst=casa dstsize=5 devuelve dst: %s\n\n", dst);
	
	char srccat[50] = "perro";
	char dstcat[] = "come";
	size_t rescat;
	printf("s_strlcat dst=come src=perro dstsize=2: %s\n", srccat); 
	printf("s_strlcat dst=come src=perro dstsize=2: %s\n", dstcat); 
	rescat = s_strlcat(dstcat, srccat, 6);
	printf("s_strlcat concatenado esta en el nuevo dst=comeperr: %s y el tamano es %zu\n\n", dstcat, rescat);


	char memsetb[] = "cadena";
	printf("s_memset b=cadena c=a len=3: %s\n\n", s_memset(memsetb, 'a', 3));

	char bzeros[] = "transporte";
	s_bzero(bzeros, 4);
	printf("s_bzero s=transporte n=4: %s\n\n", bzeros);

	char memchrs[] = "arrastrar";
	int memchrc = 't';
	printf("s_memchr s=arrastrar, c=t, n=9: %s\n\n", s_memchr(memchrs, memchrc, 6));

	char memcpys[] = "inicial";
	char memcpyd[] = "final";
	printf("s_memcpy src=inicial dst=final n=5: %s\n\n", s_memcpy(memcpyd, memcpys, 5));


	char strchrs[] = "tractor";
	int strchri = 'a';
	printf("s_strchr src=tractor, int=a: %s\n\n", s_strchr(strchrs, strchri));

	int resultmemcmp = 0;
    resultmemcmp = s_memcmp("abc","abc",2);
    printf("s_memcmp cuando las dos cadenas son iguales hasta n da cero:  %d\n",resultmemcmp);
    resultmemcmp = s_memcmp("bca","abc",2);
    printf("s_memcmp cuando la primer cadena es mayor que la segunda hasta n da uno: %d\n",resultmemcmp);
    resultmemcmp = s_memcmp("abc","bca",2);
    printf("s_memcmp cuando la primer cadena es menor que la segunda hasta n da menos uno: %d\n\n",resultmemcmp);

	char atois[] = " -56";
	printf("s_atoi char= -56 %d\n\n", s_atoi(atois));

	char	strncmps1[] = "igualdiferente";
	char	strncmps2[] = "igualdiferente";
	char	strncmps3[] = "diferente";
	printf("s_strncmp s1=igualdiferente, s2=igualdiferente, s3=diferente, s1s2: %d, s1s3: %d, s2s3: %d\n\n", s_strncmp(strncmps1, strncmps2, 5), s_strncmp(strncmps1, strncmps3, 5), s_strncmp(strncmps2, strncmps3, 5));

	
	char strnstrs1[] = "astronauta";
	char strnstrs2[] = "trona";
	printf("s_strnstr s1=astronauta, s2=trona, len=9: %s", s_strnstr(strnstrs1, strnstrs2, 9));	


	return (0);
}

