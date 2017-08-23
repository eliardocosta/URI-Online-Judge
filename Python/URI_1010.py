def main(args):
	inp1 = input().split(' ')
	inp2 = input().split(' ')

	cod1, qtd1, val1 = inp1
	cod2, qtd2, val2 = inp2

	tot = int(qtd1)*float(val1) + int(qtd2)*float(val2)

	print('VALOR A PAGAR: R$ %0.2f' %tot)

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
