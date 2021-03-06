using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BookStoneScript : MonoBehaviour {

    public GameObject buttonBuy, buttonNBuy;
    public Text textPrice;
    int price;
    // Use this for initialization
    void Start()
    {
        SetPrice();
    }

    // Update is called once per frame
    void Update()
    {
        //Debug.Log("So lan nhan: " + press);
    }

    void SetPrice()
    {
        price = Random.RandomRange(10, 70);
        textPrice.text = "$" + price;
    }
    public void Buy()
    {
        
        //Debug.Log("Da vao day");
        CGameManager.instance.bookStone = true;
        int dollar = PlayerPrefs.GetInt("MaxDollar");
        PlayerPrefs.SetInt("MaxDollar", dollar - price);
        ShopController.instance.SetTextMoney();
        //Destroy(gameObject);
        buttonNBuy.SetActive(true);
        buttonBuy.SetActive(false);
    }

}