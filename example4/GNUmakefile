# Custom rule for 'bar'
bar:
	echo "Overridden build for bar!"

# Delegate all other targets to Makefile
%: force
	@$(MAKE) -f Makefile $@

# Dummy target to force pattern rule execution
force: ;

