/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mains.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:35:55 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/02 19:08:10 by spena-mu         ###   ########.fr       */
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
	rescat = s_strlcat(dstcat, srccat, 9);
	printf("s_strlcat concatenado esta en el nuevo dst=comeperr: %s y el tamano es %zu\n\n", dstcat, rescat);


	char memsetb[] = "cadena";
	printf("s_memset b=cadena c=a len=3: %s\n\n", s_memset(memsetb, 'a', 3));


	return (0);
}

