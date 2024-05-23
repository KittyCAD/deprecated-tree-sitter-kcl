package tree_sitter_kcl_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-kcl"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_kcl.Language())
	if language == nil {
		t.Errorf("Error loading Kcl grammar")
	}
}
