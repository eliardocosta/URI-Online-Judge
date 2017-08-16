def main(args):
	NAME = raw_input()
	SAL =  float(input())
	VH =  float(input())
	S = SAL + 0.15*VH
	print('TOTAL = R$ %.2f' % S)

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
