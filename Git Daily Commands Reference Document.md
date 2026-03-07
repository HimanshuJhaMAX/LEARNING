
# Git Daily Commands Reference Document

## Setup & Configuration
```bash
git config --global user.name "Your Name"
git config --global user.email "your@email.com"
git config --list
```

## Daily Workflow

### Initialize & Clone
```bash
git init                          # Initialize new repo
git clone <url>                   # Clone existing repo
git clone <url> <directory>       # Clone into specific directory
```

### Check Status
```bash
git status                        # Show working tree status
git log --oneline -5              # Show last 5 commits
git diff                          # Show unstaged changes
git diff --staged                 # Show staged changes
git diff <branch1> <branch2>      # Compare branches
```

### Stage & Commit
```bash
git add <file>                    # Stage specific file
git add .                         # Stage all changes
git commit -m "message"           # Commit with message
git commit --amend                # Modify last commit
git commit --amend --no-edit      # Amend without changing message
```

### Branches
```bash
git branch                        # List local branches
git branch -a                     # List all branches (local & remote)
git branch <branch-name>          # Create new branch
git checkout <branch-name>        # Switch branch
git switch <branch-name>          # Switch branch (new syntax)
git checkout -b <branch-name>     # Create & switch branch
git merge <branch-name>           # Merge branch
git merge --no-ff <branch-name>   # Merge with merge commit
git branch -d <branch-name>       # Delete branch
git branch -D <branch-name>       # Force delete branch
git branch -m <old-name> <new>    # Rename branch
```

### Remote Operations
```bash
git remote -v                     # List remotes
git push origin <branch>          # Push to remote
git pull origin <branch>          # Fetch & merge
git fetch origin                  # Fetch updates
git fetch --all                   # Fetch all remotes
git remote add upstream <url>     # Add upstream remote
git remote set-url origin <url>   # Change remote URL
git remote rename <old> <new>     # Rename remote
git remote remove <name>          # Remove remote
git push origin <branch> --force  # Force push to remote
git push -u origin <branch>       # Push & set upstream
git push origin --delete <branch> # Delete remote branch
git pull upstream <branch>        # Pull from upstream
git fetch upstream                # Fetch from upstream
git rebase upstream/main          # Rebase on upstream
git push origin --all             # Push all branches
git push origin --tags            # Push all tags
```

### Undo Changes
```bash
git restore <file>                # Discard changes
git restore --staged <file>       # Unstage file
git reset HEAD <file>             # Unstage file
git reset --soft HEAD~1           # Undo last commit (keep changes)
git reset --mixed HEAD~1          # Reset staging area
git reset --hard HEAD~1           # Discard last commit & changes
git revert <commit-hash>          # Create undo commit
git clean -fd                     # Remove untracked files
```

### Advanced Operations
```bash
git stash                         # Save changes temporarily
git stash list                    # List all stashes
git stash pop                     # Restore stashed changes
git stash drop                    # Delete stash
git tag <tag-name>                # Create a tag
git tag -a <tag-name> -m "msg"    # Create annotated tag
git tag -l                        # List all tags
git show <commit-hash>            # Show commit details
git blame <file>                  # Show who changed each line
git cherry-pick <commit-hash>     # Apply specific commit
git cherry-pick <start>..<end>    # Cherry-pick range
git rebase -i HEAD~3              # Interactive rebase last 3 commits
git squash <commit-hash>          # Combine commits
```

### Cleanup & Maintenance
```bash
git clean -fd                     # Remove untracked files
git clean -fX                     # Remove ignored files
git gc                            # Garbage collection
git reflog                        # Show reference logs
git prune                         # Remove unreachable objects
git fsck                          # File system check
```

## Useful Tips & Shortcuts

### Common Aliases
```bash
git config --global alias.st status
git config --global alias.co checkout
git config --global alias.br branch
git config --global alias.ci commit
git config --global alias.unstage 'reset HEAD --'
git config --global alias.last 'log -1 HEAD'
git config --global alias.visual 'log --graph --oneline --all'
git config --global alias.amend 'commit --amend --no-edit'
git config --global alias.undo 'reset --soft HEAD~1'
git config --global alias.fetch-all 'fetch --all'
git config --global alias.pushall 'push --all && push --tags'
```

### Viewing History
```bash
git log --graph --oneline --all   # Visual branch history
git log --author="name"           # Commits by author
git log -p                        # Show changes with commits
git log --since="2 weeks ago"     # Commits in timeframe
git log --until="1 week ago"      # Commits until timeframe
git log --follow <file>           # Follow file history
git log -S <string>               # Find commits with string
git shortlog                      # Summary by author
git log --pretty=format:"%h %s"   # Custom format
```

### Finding Issues
```bash
git bisect start                  # Binary search for bug
git bisect good <commit>          # Mark good commit
git bisect bad <commit>           # Mark bad commit
git grep "search-term"            # Search in tracked files
git log -S "code"                 # Find commits changing code
git log --all --grep="pattern"    # Search commit messages
git log --follow -p <file>        # Full history of file changes
```

### Advanced Git Workflows
```bash
git rebase -i <base>              # Interactive rebase
git worktree add <path> <branch>  # Create working tree
git worktree list                 # List working trees
git subtree add --prefix <dir> <repo> <branch>
git submodule add <repo> <path>   # Add submodule
git submodule update --init       # Initialize submodules
git reflog show <ref>             # Show ref history
```

### Useful Configurations
```bash
git config --global core.editor "vim"
git config --global pull.rebase false
git config --global diff.tool vimdiff
git config --global merge.tool vimdiff
git config --global color.ui true
git config --global log.decorate full
```
