def main(args):
	raio = float(input())
	Pi = 3.14159
	A = Pi*raio*raio
	print('A=%.4f' % A)
	return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
    