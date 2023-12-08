class generic{
    private String sercret;
    private String key = "Awesome Show, Great Job!";
    public generic(){
        this.sercret ="Its free real estate";
    }
    public generic(String sercret){
        this.sercret = sercret;
    }
    public String getSercret(String key){
        if(this.key.equals(key)){
            return this.sercret;
        }else{
            return "Wrong key";
        }
        
    }
    public void setSercret(String sercret){
        this.sercret = sercret;
    }
    public void setNewKey(String key, String newKey){
        if(this.key.equals(key)){
            this.key = newKey;
        }
    }
}