
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
```

### Check Status
```bash
git status                        # Show working tree status
git log --oneline -5              # Show last 5 commits
git diff                          # Show unstaged changes
```

### Stage & Commit
```bash
git add <file>                    # Stage specific file
git add .                         # Stage all changes
git commit -m "message"           # Commit with message
git commit --amend                # Modify last commit
```

### Branches
```bash
git branch                        # List local branches
git branch <branch-name>          # Create new branch
git checkout <branch-name>        # Switch branch
git checkout -b <branch-name>     # Create & switch branch
git merge <branch-name>           # Merge branch
git branch -d <branch-name>       # Delete branch
```

### Remote Operations
```bash
git remote -v                     # List remotes
git push origin <branch>          # Push to remote
git pull origin <branch>          # Fetch & merge
git fetch origin                  # Fetch updates
```

### Undo Changes
```bash
git restore <file>                # Discard changes
git reset HEAD <file>             # Unstage file
git revert <commit-hash>          # Create undo commit
```

### Advanced Operations
```bash
git stash                         # Save changes temporarily
git stash pop                     # Restore stashed changes
git tag <tag-name>                # Create a tag
git tag -l                        # List all tags
git show <commit-hash>            # Show commit details
git blame <file>                  # Show who changed each line
git cherry-pick <commit-hash>     # Apply specific commit
```

### Cleanup & Maintenance
```bash
git clean -fd                     # Remove untracked files
git gc                            # Garbage collection
git reflog                        # Show reference logs
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
```

### Viewing History
```bash
git log --graph --oneline --all   # Visual branch history
git log --author="name"           # Commits by author
git log -p                        # Show changes with commits
git log --since="2 weeks ago"     # Commits in timeframe
git shortlog                      # Summary by author
```

### Finding Issues
```bash
git bisect start                  # Binary search for bug
git grep "search-term"            # Search in tracked files
git log -S "code"                 # Find commits changing code
git log --all --grep="pattern"    # Search commit messages
```

### Useful Configurations
```bash
git config --global core.editor "vim"
git config --global pull.rebase false
git config --global diff.tool vimdiff
git config --global merge.tool vimdiff
```