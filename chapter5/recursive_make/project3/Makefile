SECRET = mysecret
unexport SECRET

all:
	@echo "Top make SECRET=$(SECRET)"
	$(MAKE) inner

inner:
	@echo "Sub-make SECRET=$(SECRET)"

