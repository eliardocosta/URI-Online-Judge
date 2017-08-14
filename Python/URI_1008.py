def main(args):
	N  =  int(input())
	WH =  int(input())
	SH =  float(input())
	S = WH*SH
	print('NUMBER = %d' % N)
	print('SALARY = U$ %.2f' % S)

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
