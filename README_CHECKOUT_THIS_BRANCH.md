Because the current branch name has conflict with one of the original branchs name, use the following commands to checkout:
```
git fetch origin
git checkout -b v4.15 origin/v4.15
```

To check in to remote, use
```
git push origin refs/heads/v4.15
```
